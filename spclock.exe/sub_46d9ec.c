// 函数: sub_46d9ec
// 地址: 0x46d9ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_45b854(arg1, arg2, arg3)
char temp0 = arg3.b
int32_t* result
result.b = arg3.b - 1

if (temp0 u< 1)
    if ((arg1[7].b & 1) == 0 && arg1[0xa4] == 0 && arg1 == *(arg2 + 4))
        result = sub_403df4(arg2, 0x44a270)
        
        if (result.b != 0)
            result = sub_46fa30(arg1, arg2)
else if (temp0 == 1)
    if (arg2 == arg1[0xa4])
        sub_46fa30(arg1, nullptr)
    
    if (arg2 == arg1[0xa8])
        sub_46fa08(arg1, nullptr)
    
    if (arg2 == arg1[0xaa])
        sub_46f9e4(arg1, nullptr)
    
    if (arg2 == arg1[0xcd])
        sub_46fd6c(arg1, nullptr)
    
    void* eax_7 = arg1[0xcb]
    
    if (eax_7 != 0)
        int32_t eax_8 = sub_41a150(eax_7, arg2)
        
        if (eax_8 s>= 0)
            sub_419fe8(arg1[0xcb], eax_8)
            sub_423648(arg2, arg1)
    
    result = arg1[0xce]
    
    if (result != 0)
        result = sub_41a150(result, arg2)
        
        if (result s>= 0)
            sub_419fe8(arg1[0xce], result)
            result = sub_423648(arg2, arg1)
    
    if (arg2 == arg1[0xd0])
        result = nullptr
        arg1[0xd0] = 0
    
    if (arg2 == arg1[0xb1])
        result = nullptr
        arg1[0xb1] = 0

if (arg1[0xa6] == 0)
    return result

return (*(*arg1[0xa6] + 0x10))()
