// 函数: sub_406a30
// 地址: 0x406a30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void** buffer = arg1
int32_t* ebx = arg1

if (ebx == 0)
    return 

int32_t ecx

if (ebx[1] s>= 0x10000)
    sub_404d80(ecx, ebx[1])
else
    sub_404c78(arg2, &buffer, LoadStringA(sub_405f54(**ebx), ebx[1], &buffer, 0x1000))
