#include <stdio.h>

#
#include <curl/curl.h>

int main(void)
{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    
{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
   

{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();

{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_

{
    CURL *curl;
    CURLcode res;

    curl = curl_easy

{
    CURL *curl;
    CURLcode res;

    curl = curl_

{
    CURL *curl;
    CURLcode res;

    curl = curl

{
    CURL *curl;
    CURLcode res;

    curl =

{
    CURL *curl;
    CURLcode res;

    curl

{
    CURL *curl;
    CURLcode res;

   

{
    CURL *curl;
    CURLcode res;


{
    CURL *curl;
    CURLcode res;

{
    CURL *c

{
    CURL *

{
    CURL
if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, 
        curl_easy_setopt(curl, CURLOPT_URL,

        curl_easy_setopt(curl, CURLOPT_URL

        curl_easy_setopt(curl, CURLOPT_

        curl_easy_setopt(curl, CURLOPT

        curl_easy_setopt(curl, CURLOP

        curl_easy_setopt(curl, CURL

        curl_easy_setopt(curl, C

        curl_easy_setopt(curl,

        curl_easy_setopt(curl

        curl_easy_setopt(c

        curl_easy_setopt(

        curl_easy_setopt

        curl_easy_set

        curl_easy_

        curl_easy

        curl_

        curl

       
"http://localhost:8775/task/new");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, 
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS,

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS

        curl_easy_setopt(curl, CURLOPT_POSTFIEL

        curl_easy_setopt(curl, CURLOPT_POSTFI

        curl_easy_setopt(curl, CURLOPT_POST

        curl_easy_setopt(curl, CURLOPT_

        curl_easy_setopt(curl, CURLOPT

        curl_easy_setopt(curl, CURLOP

        curl_easy_setopt(curl, CURL

        curl_easy_setopt(curl, C

        curl_easy_setopt(curl,

        curl_easy_setopt(curl

        curl_easy_setopt(c

        curl_easy_setopt

        curl_easy_set

        curl_easy_

        curl_easy

        curl

       
"url=http://example.com/index.php?id=1&data=id=1");

        res = curl_easy_perform(curl);
        

        res = curl_easy_perform(curl);
       


        res = curl_easy_perform(curl);


        res = curl_easy_perform(curl


        res = curl_easy_perform(


        res = curl_easy_perform


        res = curl_easy_per


        res = curl_easy_


        res = curl_easy


        res = curl_


        res = curl


        res =


        res


       


if(res != CURLE_OK)
            
            f

           
fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

        curl_easy_cleanup(curl);
    }

    

        curl_easy_cleanup(curl);
    }


        curl
return 0;
}
