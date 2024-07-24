using System;
using System.Windows.Forms;
using NAudio.Wave;

public class MP3Player : Form
{
    private Button playButton;
    private Button pauseButton;
    private Button stopButton;
    private TrackBar volumeBar;
    private Label currentTrack;
    private WaveOutEvent waveOut;
    private AudioFileReader audioFile;

    [STAThread]
    public static void Main()
    {
        Application.EnableVisualStyles();
        Application.SetCompatibleTextRenderingDefault(false);
        Application.Run(new MP3Player());
    }

    public MP3Player()
    {
        Text = "Reproductor MP3";
        Size = new System.Drawing.Size(400, 200);
        currentTrack = new Label();
        currentTrack.Text = "(NIRVANA)-LITHIUM.MP3";
        currentTrack.Location = new System.Drawing.Point(20, 20);
        currentTrack.AutoSize = true;
        Controls.Add(currentTrack);

        playButton = new Button();
        playButton.Text = "▶";
        playButton.Font = new System.Drawing.Font(playButton.Font.FontFamily, 16);
        playButton.Location = new System.Drawing.Point(20, 50);
        playButton.Click += new EventHandler(PlayButton_Click);
        Controls.Add(playButton);

        pauseButton = new Button();
        pauseButton.Text = "⏸";
        pauseButton.Font = new System.Drawing.Font(pauseButton.Font.FontFamily, 16);
        pauseButton.Location = new System.Drawing.Point(100, 50);
        pauseButton.Click += new EventHandler(PauseButton_Click);
        Controls.Add(pauseButton);

        stopButton = new Button();
        stopButton.Text = "■";
        stopButton.Font = new System.Drawing.Font(stopButton.Font.FontFamily, 16);
        stopButton.Location = new System.Drawing.Point(180, 50);
        stopButton.Click += new EventHandler(StopButton_Click);
        Controls.Add(stopButton);

        volumeBar = new TrackBar();
        volumeBar.Location = new System.Drawing.Point(260, 50);
        volumeBar.Orientation = Orientation.Horizontal;
        volumeBar.Minimum = 0;
        volumeBar.Maximum = 100;
        volumeBar.Value = 50;
        volumeBar.Scroll += new EventHandler(VolumeBar_Scroll);
        Controls.Add(volumeBar);
    }

    private void PlayButton_Click(object sender, EventArgs e)
    {
        if (audioFile == null)
        {
            audioFile = new AudioFileReader("path_to_your_mp3_file.mp3");
            waveOut = new WaveOutEvent();
            waveOut.Init(audioFile);
            waveOut.Volume = volumeBar.Value / 100f;
        }
        waveOut.Play();
    }

    private void PauseButton_Click(object sender, EventArgs e)
    {
        waveOut?.Pause();
    }

    private void StopButton_Click(object sender, EventArgs e)
    {
        waveOut?.Stop();
        audioFile.Position = 0;
    }

    private void VolumeBar_Scroll(object sender, EventArgs e)
    {
        if (waveOut != null)
        {
            waveOut.Volume = volumeBar.Value / 100f;
        }
    }

    protected override void OnFormClosing(FormClosingEventArgs e)
    {
        waveOut?.Dispose();
        audioFile?.Dispose();
        base.OnFormClosing(e);
    }
}
