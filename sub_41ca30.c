// 函数: sub_41ca30
// 地址: 0x41ca30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg5 == 0xffffffff)
    if (arg4 u>= 0x80000000)
        goto label_41ca4f
    
    arg2.b = 1
    sub_40451c(sub_40cf6c(sub_407f68+0x39c, arg2, data_4ac430))
else if (arg5 s< 0xffffffff)
    arg2.b = 1
    sub_40451c(sub_40cf6c(sub_407f68+0x39c, arg2, data_4ac430))
else
label_41ca4f:
    
    if (arg5 != 0)
        if (arg5 s> 0)
            arg2.b = 1
            sub_40451c(sub_40cf6c(sub_407f68+0x39c, arg2, data_4ac430))
    else if (arg4 u> 0x7fffffff)
        arg2.b = 1
        sub_40451c(sub_40cf6c(sub_407f68+0x39c, arg2, data_4ac430))

int32_t result
int32_t edx_1
edx_1:result = sx.q((*(*arg3 + 0x14))())
int32_t var_8 = edx_1
return result
