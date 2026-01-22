// 函数: sub_418be4
// 地址: 0x418be4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* var_8 = arg1
void* const esi

if (arg2 == 0)
    esi = nullptr
else
    esi = sub_418b84(arg2, arg3)

void* const ebx_1

if (arg1 == 0)
    ebx_1 = nullptr
else
    ebx_1 = sub_418b84(arg1, arg3)

if (esi == 0)
    if (ebx_1 != 0)
        return arg1
    
    return nullptr

if (ebx_1 == 0)
    return arg2

if (sub_403e94(esi, ebx_1) == 0)
    return arg1

return arg2
