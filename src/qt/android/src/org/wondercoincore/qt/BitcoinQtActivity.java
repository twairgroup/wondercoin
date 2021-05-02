package org.wondercoincore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class WondercoinQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File wondercoinDir = new File(getFilesDir().getAbsolutePath() + "/.wondercoin");
        if (!wondercoinDir.exists()) {
            wondercoinDir.mkdir();
        }

        try {
            Os.setenv("QT_QPA_PLATFORM", "android", true);
        } catch (ErrnoException e) {
            e.printStackTrace();
        }

        super.onCreate(savedInstanceState);
    }
}
