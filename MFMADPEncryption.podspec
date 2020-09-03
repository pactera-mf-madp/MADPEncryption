#
#  Be sure to run `pod spec lint MADPCommonComponents.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "MFMADPEncryption"
  spec.version      = "0.0.1"
  spec.summary      = "Encryption of MF-MADP"
  spec.description  = <<-DESC 
                    Encryption of MADP!     
                   DESC
  spec.homepage     = "https://github.com/pactera-mf-madp/Encryption"
  spec.license      = "MIT"
  spec.author       = { "pactera-mf-madp" => "haichuan.liu1@pactera.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/pactera-mf-madp/MADPEncryption.git", :tag => "#{spec.version}" }
  # 引用的系统的framework
  spec.frameworks = "Security", "Foundation", "UIKit"
  # 引用的系统的lib库
  spec.libraries = "c++.1"
  # 引用的三方的framework
  spec.vendored_frameworks = "MADPEncryption.framework", "openssl.framework"
  # pod需要引用的lib库
  # spec.vendored_library = 'Libraries/libProj4.a'
  # pod依赖的其他库
  # spec.dependency "JSONKit", "~> 1.4"

  # pod需要的XCode配置
  # spec.xcconfig     = { "FRAMEWORK_SEARCH_PATHS" => "$(inherited)" }
  # spec.xcconfig     = { "FRAMEWORK_SEARCH_PATHS" => "\"$(PODS_ROOT)/MFMADPCommonComponents/**\"" }
  # spec.xcconfig     = { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/xxx/xxx"' }


end
