import UIKit
import Flutter
import RingmeOttSdk

// chanel Init to handle Channel Flutter
enum ChannelName {
  static let channelChatOtt = "flutter.native/channelChatOtt"
  // static let eventPayOrder = "flutter.native/eventPayOrder"
}

enum MethodNames {
  static let helloMethod = "helloMethod"
}

@UIApplicationMain
@objc class AppDelegate: FlutterAppDelegate {
  // let isLogin = '';
  override func application(
    _ application: UIApplication,
    didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
  ) -> Bool {
    GeneratedPluginRegistrant.register(with: self)
    RingmeOttSdk.shared.initConnection()
    
    let controller = window.rootViewController as? FlutterViewController
    let nativeChannel = FlutterMethodChannel(name: ChannelName.channelChatOtt, binaryMessenger: controller!.binaryMessenger)
      nativeChannel.setMethodCallHandler({
      [weak self] (call: FlutterMethodCall, result: @escaping FlutterResult) -> Void in
          guard call.method == MethodNames.helloMethod else {
            result(FlutterMethodNotImplemented)
            return
          }
          let string1 = "This is"
          var appendString = ""

          RingmeOttSdk.shared.login(with: "mi41haa6fq1667289899121@vnpost", password: "5bfa6fb3fd05e1a8d9d42da07ea020bdf12ce1e8", appId: "DingDong") { [weak self] (isLogin, error) in
            // isLogin = isLogin.toString();
            appendString = "\(string1) \(String(isLogin))"
            print("Place a string here, and a variable \(isLogin))")

            if isLogin {
              // result("isLogin value: true")
            // Update thông tin khách hàng vào SDK chat
            // RingmeOttSdk.shared.updateUserInfo(with:
            //     jsonStringUserInfo, completion: nil)
            // jsonStringUserInfo được mô tả theo mục 4.2
            } else {
            // self!.showError(with:"Login thất bại")
            // result("isLogin value: false")
            }
          }

          result("isLogin value: \(appendString)")
      })

    return super.application(application, didFinishLaunchingWithOptions: launchOptions)
  }


}
