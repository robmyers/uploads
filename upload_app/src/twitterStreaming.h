#ifndef _TWITTER_STREAMING_APP
#define _TWITTER_STREAMING_APP

#include <string>

void start_twitter_search(const std::string & userpass);

void reset_twitter_emotion_map();

extern std::string current_emotion;

#endif
