#
# Be sure to run `pod lib lint XHHelper.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XHHelper'
  s.version          = '1.0.1'
  s.summary          = 'XHHelper是一款工具类库'
  

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
XHHelper是一款工具类库，包含了类别、基类等。
                       DESC

  s.homepage         = 'https://github.com/xiaohuanghaung/XHHelper'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '18811574335@163.com' => 'xiaohuanghuang' }
  s.source           = { :git => 'https://github.com/xiaohuanghaung/XHHelper.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'XHHelper/Classes/**/*'
  
  s.ios.vendored_frameworks = 'Frameworks/XHHelper.framework'
  
  #s.frameworks = 'UIKit','Foundation'
  
  # s.resource_bundles = {
  #   'XHHelper' => ['XHHelper/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
 s.dependency 'AFNetworking', '~> 3.2.1'
 s.dependency 'MBProgressHUD', '~> 1.1.0'
end
