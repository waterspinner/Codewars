# include<regex>

std::string pig_it(std::string str)
{
  std::regex wordRegex("\\b(\\w)(\\w*)\\b");
  std::string result = std::regex_replace(str, wordRegex, "$2$1ay");
  return result;
}