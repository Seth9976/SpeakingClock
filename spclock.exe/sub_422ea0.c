// 函数: sub_422ea0
// 地址: 0x422ea0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx = sub_404074(arg1, arg2)

if (arg1[2] != 0 && arg1[4].b == 0)
    sub_423288(arg1)
    
    if (arg1[3].b != 0)
        sub_423260(arg1)
    
    ecx = sub_423290(arg1)

int32_t ecx_1 = sub_422fdc(*arg1, arg1, ecx, 0, 0)
HANDLE hObject = arg1[1]

if (hObject != 0)
    ecx_1 = CloseHandle(hObject)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
sub_403c58(ecx_1, edx_1)
sub_403c68(arg1[0xe])
int32_t result = sub_422b44()

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
