package ndk.zj.com.ndk_version_3.jni;

public class BasketBallJni {

    static {
        System.loadLibrary("basketball-lib");
    }

    public native String ballInfoShow();

}
