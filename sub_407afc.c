// 函数: sub_407afc
// 地址: 0x407afc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if (data_4af800 == 0)
    data_4af800 = LoadLibraryA("hhctrl.ocx")
    
    if (data_4af800 != 0)
        data_4af804 = GetProcAddress(data_4af800, "HtmlHelpA")
        data_4af808 = GetProcAddress(data_4af800, "HtmlHelpW")

if (data_4af804 != 0 && data_4af808 != 0)
    result.b = 1

return result
