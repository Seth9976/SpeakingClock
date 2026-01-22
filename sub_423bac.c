// 函数: sub_423bac
// 地址: 0x423bac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx = sub_404074(arg1, arg2)
void* eax = arg1[4]

if (eax != 0)
    ecx = sub_423de4(eax, arg1)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_403c58(ecx, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
