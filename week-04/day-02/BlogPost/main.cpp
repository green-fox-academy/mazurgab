#include <iostream>
#include <vector>
#include "BlogPost.h"


int main() {

std::vector <BlogPost> blog;
blog.push_back(BlogPost("John Doe", "Lorem Ipsum", "2000.05.04.", "Lorem ipsum dolor sit amet"));
blog.push_back(BlogPost("Tim Urban", "Wait but why", "2010.10.10.", "A popular long-form, stick-figure-illustrated blog about almost everything."));
blog.push_back(BlogPost("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "2017.03.28.", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing."));

for (int i=0; i < blog.size(); ++i){
    std::cout<<"Author: "<<blog[i].getAuthorName()<<", Title: "<<blog[i].getTitle()<<", Publication date: "<<blog[i].getPublicationDate()<<", Text: "<<blog[i].getText()<<std::endl;


}

}