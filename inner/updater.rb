require 'fileutils'
require 'net/http'

puts "Checking for updates..."

# Download the version file from GitHub
Net::HTTP.start("raw.githubusercontent.com") do |http|
    resp = http.get("/flash76/shine/master/inner/version")
end

puts File.read("version")