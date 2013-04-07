About Klout.com and Klout API module
====================================

Klout.com measures influence online of people via social media. 
Our friendships and professional connections have moved online, making 
influence measurable for the first time in history. When you recommend, 
share, and create content you impact others. Your Klout Score measures 
that influence on a scale of 1 to 100.

The Klout API module is used to provide data for use by other modules
and functionality.

Installation
============

First, you need access to the Klout API. 
- Go to http://developer.klout.com/
- Go through the site and approval steps
- Get the API for the Partner API V2
After you activated the module (at "admin/modules") configure your Klout
API (using "<site>admin/config/services/klout_api").

Configuration
=============

The Klout API (using "<site>admin/config/services/klout_api") needs your 
Klout Public Key and Shared Secret to be able to connect to the API.
Set up the user permissions to allow admin access and user access.
When users have access to the Klout API from a user perspective, they will 
get a tab in their account (<site>/user/<uid>/klout). In there they can put
in their social media connections (Twitter, Google+ and Klout) and connect
their account to the Klout API. After making the connection, their current
Klout score should appear on their Klout page 
(ie. "<site>admin/config/services/klout_api")

Developer Usage
===============
When installed, you can get a given user's Klout score by calling this
function: klout_api_get_score($user_id) -- this will return an integer 
from -1 (not found) or the actual score. That score is cached to cut down
the number of API calls that happen.

Registering in www.klout.com
============================

To register an account in klout.com, you need to do the following steps.
1. Go to www.klout.com
2. "Connect with facebook"
3. "Sign In with twitter"
4. You will get verification email to your email id associated with facebook
5. Verify that verification link in that email
6. Fill up the profile

TODO:
=====
- Add a Views Field
- Add A Views Filter
- Derive more information from the Klout API
- Display more information from the Klout API