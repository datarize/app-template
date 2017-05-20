package datarize.shell;

public final class Native {
    private static final Native shared = new Native();

    static final Native getInstance() {
        return shared;
    }

    private Native() {}

    public native String stringFromJNI();

    // Used to load the 'datarize.native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
}
