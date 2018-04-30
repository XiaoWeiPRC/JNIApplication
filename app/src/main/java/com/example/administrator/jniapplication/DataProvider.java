package com.example.administrator.jniapplication;

/*
 * Created by XiaoWei on 2018/4/27.
 */
public final class DataProvider {

    static {
        System.loadLibrary("native-lib");
    }

    public native String getStringFromJNI();
}
