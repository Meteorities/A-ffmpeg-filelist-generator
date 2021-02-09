# A-ffmpeg-filelist-generator
A ffmpeg filelist generator written in C, for a specific live stream service provider's website.

When running the program, it will ask you for the last video clip's number of a bunch of ts files (or another format) you had downloaded from a specific website. Then it will create a "filelist.txt" file in the same directory where you run it, which content is: 
"media_0.ts
 media_1.ts
 media_2.ts
 ...
 media_x.ts (x is the number you entered before)"
 
 Making this txt file in a very easy way, and you can use command such as "ffmpeg -f concat -i filelist.txt -c copy output.mkv" to merge those bunch of video files.
 
 This tool has no skill and it is very easy, just upload it to record my C learning time. And this tool is using for a certain website, you can modify and use it in your own way. Guessing nobody will do that :)
