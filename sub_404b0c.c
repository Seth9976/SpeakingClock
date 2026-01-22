// 函数: sub_404b0c
// 地址: 0x404b0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
int32_t* lpParameter

if (data_4aa030 == 0)
    lpParameter = sub_402ea8(8)
    *lpParameter = arg1
    lpParameter[1] = arg6
else
    lpParameter = data_4aa030()

data_4ad049 = 1
return CreateThread(arg3, arg2, sub_404ad4, lpParameter, arg5, arg4)
