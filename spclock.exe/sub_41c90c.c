// 函数: sub_41c90c
// 地址: 0x41c90c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ecx = arg1
int32_t edx

if (arg3 == 0xffffffff)
    if (arg2 u>= 0x80000000)
        goto label_41c924
    
    edx.b = 1
    ecx = sub_40451c(sub_40cf6c(sub_407f68+0x39c, edx, data_4ac430))
else if (arg3 s< 0xffffffff)
    edx.b = 1
    ecx = sub_40451c(sub_40cf6c(sub_407f68+0x39c, edx, data_4ac430))
else
label_41c924:
    
    if (arg3 != 0)
        if (arg3 s> 0)
            edx.b = 1
            ecx = sub_40451c(sub_40cf6c(sub_407f68+0x39c, edx, data_4ac430))
    else if (arg2 u> 0x7fffffff)
        edx.b = 1
        ecx = sub_40451c(sub_40cf6c(sub_407f68+0x39c, edx, data_4ac430))
return (*(*ecx + 4))()
