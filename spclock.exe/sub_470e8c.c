// 函数: sub_470e8c
// 地址: 0x470e8c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x276)
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t* edx
char ebx_1
result, ebx_1 = sub_470d84(arg1, edx)

if (ebx_1 != 0)
    return result

return (*(*arg1 + 0xd4))()
