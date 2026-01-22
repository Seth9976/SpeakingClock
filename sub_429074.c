// 函数: sub_429074
// 地址: 0x429074
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

enum REG_VALUE_TYPE type = arg3
sub_403578(arg3, 8, 0)
PSTR lpValueName = sub_405018(arg2)
int32_t result
result.b = RegQueryValueExA(*(arg1 + 4), lpValueName, nullptr, &type, nullptr, arg3 + 4) == NO_ERROR
*arg3 = sub_428a50(type)
return result
