// 函数: sub_40e67c
// 地址: 0x40e67c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HMODULE hModule = GetModuleHandleA(sub_40e6b2+2)

if (hModule != 0)
    hModule = GetProcAddress(hModule, sub_40e6b2+0x12)
    data_4aa824 = hModule

if (data_4aa824 == 0)
    hModule = sub_409bd8
    data_4aa824 = sub_409bd8

return hModule
