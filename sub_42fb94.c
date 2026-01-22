// 函数: sub_42fb94
// 地址: 0x42fb94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t eax = arg1[5]

if (eax != 0)
    sub_42f900(eax)
    DeleteObject(arg1[5])
    arg1[5] = 0

(**arg1)()
HANDLE hObject = arg1[0x19]

if (hObject != 0)
    CloseHandle(hObject)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_403c58(sub_40eb14(&arg1[0x1b]), edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
