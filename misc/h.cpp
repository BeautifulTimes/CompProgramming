// 00. | set hello "world"
// 01. | proc Factorial (x) {
// 02. |   set accumulator 1
// 03. |   set i x
// 04. |   if ($i == 1) {
// 05. |     return 1
// 06. |   }
// 07. |   while ($i >= 2) {
// 08. |     set accumulator [ expr $i * $accumulator ]
// 09. |     set i [ expr $i - 1 ]
// 10. |   }
// 11. | }

unordered_map<int,int> find_blocks(vector<string> source_code)
{
  unordered_map<int,int> blocks;
  stack<int> openingBraces;
  for(int line = 0;line < source_code.size();line++)
  {
    int lengthOfLine = source_code[line].length();
    if(source_code[line][lengthOfLine-1] == '{')
    {
      openingBraces.push(line);
    }
    if(source_code[line][lengthOfLine-1] == '}')
    {
      if(openingBraces.empty())
      {
        raise exception;
      }
      blocks[openingBraces.top()] = line;
      openingBraces.pop();
    }
  }
  if(!openingBraces.empty())
    raise exception;
  return blocks;
}

// 00. |   set hello "world"
// 01. | - proc Factorial (x) {
// 02. |     set accumulator 1
// 03. |     set i x
// 04. | -   if ($i == 1) {
// 05. |       return 1
// 06. |     }
// 07. | -   while ($i >= 2) {
// 08. |       set accumulator [ expr $i * $accumulator ]
// 09. |       set i [ expr $i - 1 ]
// 10. |     }
// 11. |   }

// > toggle line 4
 
// 00. |   set hello "world"
// 01. | - proc Factorial (x) {
// 02. |     set accumulator 1
// 03. |     set i x
// 04. | +   if ($i == 1) { ... }
// 05. | -   while ($i >= 2) {
// 06. |       set accumulator [ expr $i * $accumulator ]
// 07. |       set i [ expr $i - 1 ]
// 08. |     }
// 09. |   }


// > toggle line 5
 
// 00. |   set hello "world"
// 01. | - proc Factorial (x) {
// 02. |     set accumulator 1
// 03. |     set i x
// 04. | +   if ($i == 1) { ... }
// 05. | +   while ($i >= 2) { ... }
// 06. |   }


// > toggle line 4
  
// 00. |   set hello "world"
// 01. | - proc Factorial (x) {
// 02. |     set accumulator 1
// 03. |     set i x
// 04. | -   if ($i == 1) {
// 05. |       return 1
// 06. |     }
// 07. | +   while ($i >= 2) { ... }
// 08. |   }


void set_lines_to_display(vector<string> lines); // this is available, in scope, implemented already, and you can call it
 
class Editor {
public:
    unordered_map<int,int> blocks;
    unordered_map<int,bool> minimized;
    vector <string> actual_source_code;
    Editor(vector<string> source_code) {
        blocks = find_blocks(source_code);
        actual_source_code = source_code;
        for(int line = 0;line < source_code.size();line++)
        {
          if(blocks.find(line) != blocks.end())
          {
            minmized[line] = false;
          }
        }
        render_lines_to_display();
    }
 
    void toggle_block(int displayed_line_num) {
      vector<string> outputToEditor = actual_source_code;
      int iterate_displayed_line_number = 0;
      for(int line = 0;line<actual_source_code.size();line++)
      {
        if(iterate_displayed_line_number == displayed_line_num)
        {
           minimized[line] = !minimized[line];
        }
        if(blocks.find(line) != blocks.end() && minmized[line])
        {
            line = blocks[line];
        }
        iterate_displayed_line_number++;
      }
       render_lines_to_display()
    }

    void render_lines_to_display()
    {
      vector<string> outputToEditor = actual_source_code;
      for(int line = 0;line<actual_source_code.size();line++)
      {
         if(blocks.find(line) == blocks.end())
        {
          outputToEditor[line] = ' ' + outputToEditor[line];
        }
        else
        {
          if(!minimized[line])
          {
            outputToEditor[line] = '-' + outputToEditor[line] ;
          }
          else
          {
             outputToEditor[line] = '+' + outputToEditor[line] + " ... }";           
             line = blocks[line];
          }
        }
      }
      set_lines_to_display(outputToEditor);
    }
};