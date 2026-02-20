aining the MP4 files
# directory_path = r"G:\Мой диск\Личное\Угадай опенинг\Невероятное"

# # Iterate over all files in the directory
# for filename in os.listdir(directory_path):
#     # Check if the file is an MP4 file
#     if filename.endswith(".mp4"):
#         # Define the full path to the MP4 file
#         mp4_path = os.path.join(directory_path, filename)
        
#         # Define the full path to the output MP3 file
#         mp3_path = os.path.join(directory_path, os.path.splitext(filename)[0] + ".mp3")
        
#         # Load the video file
#         video_clip = VideoFileClip(mp4_path)
        
#         # Extract and save the audio as an MP3 file
#         video_clip.audio.write_audiofile(mp3_path)

# print("Conversion from MP4 to MP3 completed.")