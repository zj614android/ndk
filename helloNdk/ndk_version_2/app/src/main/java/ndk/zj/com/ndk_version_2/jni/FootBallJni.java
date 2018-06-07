package ndk.zj.com.ndk_version_2.jni;

public class FootBallJni {

    static {
        System.loadLibrary("football-lib");
    }

    public native String ballInfoShow();
}
