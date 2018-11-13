#include "PostIt.h"

PostIt::PostIt (std::string backgroundColor, std::string text, std::string textColor){

_backgroundColor = backgroundColor;
_text = text;
_textColor = textColor;

}

std::string PostIt::getBackgroundColor(){
    return _backgroundColor;
}

std::string PostIt::getText(){
    return _text;
}

std::string PostIt::getTextColor(){
    return _textColor;

}
