class SocialMediaUploader
{
    void uploadContent()
    {
        System.out.println("Uploading Content");
    }
}

class InstagramUploader extends SocialMediaUploader
{
    void uploadContent()
    {
        System.out.println("Uploading photo on Instagram");
    }
}

class YouTubeUploader extends SocialMediaUploader
{
    void uploadContent()
    {
        System.out.println("Uploading video on YouTube");
    }
}

public class Main
{
    public static void main(String args[])
    {
        InstagramUploader i = new InstagramUploader();
        YouTubeUploader y = new YouTubeUploader();

        i.uploadContent();
        y.uploadContent();
    }
}
