// 函数: sub_41a968
// 地址: 0x41a968
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (arg2 != 0)
    *arg2 = 0

int32_t* result = arg2
sub_406550(result)

if (arg1 != 0)
    int32_t esi
    esi.w = 0xffff
    
    if (sub_403e64(arg1, esi) != 0)
        result = sub_403df4(arg1, &data_418674)
        
        if (result.b == 0 || (arg1[7].b & 0x10) != 0)
            sub_406550(arg2)
            return sub_41a968()
    else
        result = sub_403df4(arg1, &data_418674)
        
        if (result.b != 0 && (arg1[7].b & 0x10) != 0)
            sub_406550(arg2)
            return (*(*arg1 + 0x28))(arg1, 0x41a9f8, arg2)

return result
