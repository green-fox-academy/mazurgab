#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string from = "bots";
    std::string from2 = "https";

    int start_pos = url.find(from);
    url.replace(start_pos, from.length(), "odds");

    int start_pos2 = url.find(from2);
    url.replace(start_pos2, from2.length(), "https:");


    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    std::cout << url << std::endl;

    return 0;
}