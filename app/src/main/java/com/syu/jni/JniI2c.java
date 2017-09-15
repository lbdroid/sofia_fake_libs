package com.syu.jni;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;

public class JniI2c extends Activity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("jni_i2c_wrapper");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    @Override
    protected void onResume(){
        super.onResume();
        Log.d("JNII2C-JAVA", "TRYING TO RUN");
        Log.d("JNII2C-JAVA", "open(abcdefg): "+Integer.toString(openW("abcdefg")));
        Log.d("JNII2C-JAVA", "writeRk(123, 111, 101, 64): "+Integer.toString(writeRkW(123, 111, 101, 64)));
        Log.d("JNII2C-JAVA", "readRk(123, 111, 101): "+Integer.toString(readRkW(123,111,101)));
        Log.d("JNII2C-JAVA", "close(123): "+Integer.toString(closeW(123)));
    }


    public static native int openW(String path);
    public static native int closeW(int filedes);
    public static native int readRkW(int filedes, int slaveaddress, int registeraddress);
    public static native int writeW(int filedes, int slaveaddress, int registeraddress, int value);
    public static native int writeRkW(int filedes, int slaveaddress, int registeraddress, int value);
}
