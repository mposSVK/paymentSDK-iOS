Pod::Spec.new do |s|
  s.name             = 'paymentSDK'
  s.version          = '2.20.0'
  s.summary          = 'Wirecard paymentSDK - online payments'
  s.description      = <<-DESC
                       The library allows online payments processing.
                       Supported payment methods:
                       - Apple Pay
                       - Card payments (Mastercard, Visa, American Express)
                       - PayPal
                       - SEPA Direct Debit
                       Fully integrated with licensed Wirecard Payment infrastructure.
                       DESC
  s.homepage         = 'https://github.com/wirecard/paymentSDK-iOS'
  s.documentation_url= 'https://paymentsdk.github.io'
  s.license          = { :type => 'MIT' }
  s.authors          = { 'Stefan Sedlak' => 'stefan.sedlak@wirecard.com', 'Peter Stavny' => 'Peter.stavny@wirecard.com' }
  s.source           = { :git => 'https://github.com/wirecard/paymentSDK-iOS.git', :tag => s.version }
  s.platform         = :ios
  s.ios.deployment_target = '8.0'

  s.dependency       'AFNetworking', '~> 3.2.1'
  s.dependency       'CardIO', '~> 5.4.1'
  s.dependency       'CMPopTipView', '~> 2.3.2'
  s.dependency       'CocoaLumberjack', '~> 3.6.0'
  s.ios.dependency   'Lockbox', '~> 3.0.6'
  s.dependency       'Mantle', '~> 2.1.0'
  s.ios.dependency   'MBProgressHUD', '~> 1.1.0'
  s.ios.dependency   'TPKeyboardAvoiding', '~> 1.3.2'
  s.dependency       'libextobjc/EXTScope', '~> 0.6'
  s.dependency       'ZappMerchantLib', '~> 1.1.2'

  s.requires_arc     = true
  s.frameworks       = 'Foundation', 'UIKit', 'PassKit', 'AddressBook', 'Security'
  s.libraries        = 'xml2'
  s.vendored_frameworks = 'PaymentSDK.framework'
  s.resource            = 'PaymentSDKResources.bundle'
end
