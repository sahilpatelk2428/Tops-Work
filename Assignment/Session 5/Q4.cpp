class MusicPlayer
{
    void play(String song)
    {
        System.out.println("Playing " + song);
    }
}

class SpotifyPlayer extends MusicPlayer
{
    void play(String song)
    {
        System.out.println("Streaming on Spotify: " + song);
    }
}

public class Main
{
    public static void main(String args[])
    {
        MusicPlayer m = new SpotifyPlayer();

        m.play("Believer");
    }
}
