select tweet_id from Tweets
where length (content) > 15
and content is not null