// 函数: sub_41cf44
// 地址: 0x41cf44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx = sub_404074(arg1, arg2)
HANDLE hObject = arg1[1]

if (hObject s>= 0)
    ecx = CloseHandle(hObject)

int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_403c58(ecx, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
