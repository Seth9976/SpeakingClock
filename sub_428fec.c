// 函数: sub_428fec
// 地址: 0x428fec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

PSTR lpValueName = sub_405018(arg2)
enum WIN32_ERROR result
result.b = RegDeleteValueA(*(arg1 + 4), lpValueName) == NO_ERROR
return result
