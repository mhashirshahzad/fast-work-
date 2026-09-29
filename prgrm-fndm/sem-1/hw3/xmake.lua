
set_project("cpp")

set_languages("c++20")

for _, file in ipairs(os.files("*.cpp")) do

    target(file)
        set_kind("binary")
        add_files(file)
end
