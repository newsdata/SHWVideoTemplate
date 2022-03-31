#
# Be sure to run `pod lib lint SHWVideoTemplate.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SHWVideoTemplate'
  s.version          = '0.1.2'
  s.summary          = 'A short description of SHWVideoTemplate.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/newsdata/SHWVideoTemplate'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'shicahgnshun-xhzy' => 'shichangshun@xhzy' }
  s.source           = { :git => 'https://github.com/newsdata/SHWVideoTemplate.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'SHWVideoTemplate/Classes/**/*'
  s.vendored_frameworks = 'SHWVideoTemplate/Frameworks/App.framework','SHWVideoTemplate/Frameworks/*.framework'
  
  
   s.dependency 'Masonry', '>= 1.1.0'
   s.dependency 'MJExtension', '>= 3.4.1'
   s.dependency 'YYModel', '>= 1.0.4'
   s.dependency 'AliyunOSSiOS', '>= 2.10.7'
   s.dependency 'AFNetworking', '>= 4.0'
   s.dependency 'Reachability', '>= 3.2'
   s.dependency 'Realm', '4.3.0'
   s.dependency 'FMDB', '>= 2.7.5'
   s.dependency 'libwebp', '>= 1.2.1'
   s.dependency 'YYCategories', '>= 1.0.4'
   s.dependency 'Mantle', '>= 2.2.0'
   
   s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
   
end
