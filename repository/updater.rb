require 'net/http'
# Must be somedomain.net instead of somedomain.net/, otherwise, it will throw exception.
Net::HTTP.start("github.com") do |http|
    resp = http.get("/flash76/sample/sample.flv")
    open("sample.flv", "wb") do |file|
        file.write(resp.body)
    end
end
puts "Done."
