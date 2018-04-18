puts "Checking for updates..."

# Download the version file from GitHub
require 'net/http'
Net::HTTP.start("raw.githubusercontent.com") { |http|
  resp = http.get("/flash76/shine/master/inner/version")
  open("version", "wb") { |file|
    file.write(resp.body)
   }
}

# Check if the version is different
File.open("my/file/path", "r") do |f|
  f.each_line do |line|
    puts line
  end
end
