# online-whoppi-cushion
Use a Spark.io device to make an online Whoopee Cushion- Unfortunately needs a Spark.io ready electronic whoopee cushion




Buy a Spark.io ready whoopee Cushion (Not available as of Jan 2015) Should have a black wire you connect to ground and a light blue wire you connect to D0 the first digital Pin.

Copy whoopee.ino to your Spark login

Copy whoopee.html to your computer and enter both the access_token and CoreID from the spark.io site

Note: The CoreID is private so whoopee.html should never go on the internet. If you want to use a better solution go to the github site:


https://github.com/hpssjellis/spark-core-web-page-html-control


From your computer click the fart button and you should see the iFrame reutrn "1" if it could work.



If your core-id and Access_token are incorrect you will see something like
{

  "code": 400,
  
  "error": "invalid_grant",
  
  "error_description": "The access token provided is invalid."
  
}


If the information is correct you should see

a bunch of inforation and 

"return_value" : 1


meaning it worked, now you just need something hooked up to D0






