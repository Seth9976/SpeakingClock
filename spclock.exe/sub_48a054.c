// 函数: sub_48a054
// 地址: 0x48a054
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
arg2.b = 1
int32_t eax_1
int32_t edx
eax_1, edx = sub_403c38(arg3, arg2)
*(arg1 + 0x78) = eax_1
edx.b = 1
int32_t* eax_2
int32_t edx_1
eax_2, edx_1 = sub_430618(sub_42a104+0x140, edx)
*(arg1 + 0x70) = eax_2
edx_1.b = 1
*(arg1 + 0x74) = sub_430618(sub_42a104+0x140, edx_1)
*(arg1 + 0x58) = 0
*(arg1 + 0x50) = 4
*(arg1 + 0x68) = 0x1fffffff
*(arg1 + 0x64) = 0x1fffffff
*(arg1 + 0x6c) = 2
*(arg1 + 0x54) = arg3
*(arg1 + 0x7c) = 0
*(arg1 + 0x7e) = 0
*(arg1 + 0x5c) = esi
*(arg1 + 0x54)
(*(**(arg1 + 0x70) + 0x34))()
*(arg1 + 0x54)
int32_t result = (*(**(arg1 + 0x74) + 0x34))()
*(arg1 + 0x7d) = 0
return result
