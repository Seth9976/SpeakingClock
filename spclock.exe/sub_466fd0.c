// 函数: sub_466fd0
// 地址: 0x466fd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx_1
int32_t* esi_1
int32_t result

if (arg2 != 0)
    ebx_1, esi_1 = sub_4679b8(arg1, arg2)
    result = ImageList_ReplaceIcon(sub_466cac(ebx_1), 0xffffffff, sub_43248c(esi_1))
else
    int32_t result_1
    result_1, ebx_1, esi_1 = sub_466de8(arg1, nullptr, nullptr)
    result = result_1

esi_1.w = 0xffef
sub_403e64(ebx_1, esi_1)
return result
