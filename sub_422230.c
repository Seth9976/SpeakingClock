// 函数: sub_422230
// 地址: 0x422230
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
char* result = arg3

if (*(result + 4) != 0)
    if (arg3[2] != 0)
    label_42229b:
        void* var_1c_1 = arg1
        result = sub_4217d8(arg1, arg3, arg2, *(arg1 + 0x48), (*(arg1 + 0x4c)).w, sub_422a00)
        
        if (result.b == 0)
            char var_15_1 = sub_4211a8(*(arg1 + 0x20), *(arg1 + 0x18), *(arg1 + 0x28))
            result = zx.d(***arg3)
            int80_t x87_r1
            
            switch (result)
                case 1, 2, 3, 6, 9
                    result = sub_421b38(&var_4)
                case 4
                    result = sub_421c30(x87_r1, &var_4)
                case 5, 0xa, 0xb
                    result = sub_421cac(&var_4)
                case 7
                    result = sub_421e4c(&var_4)
                case 8
                    result, ebp_1 = sub_42213c(&var_4)
                case 0xc
                    result, ebp_1 = sub_4221cc(&var_4)
                case 0xf
                    result = sub_422060(&var_4)
                case 0x10
                    result = sub_421c70(&var_4)
    else
        result = **arg3
        
        if (*result == 7)
            result = sub_403df4(sub_4162ec(arg2, arg3), &data_418674)
            
            if (result.b != 0)
                result = sub_4162ec(arg2, arg3)
                
                if ((result[0x24] & 4) != 0)
                    goto label_42229b

*ebp_1
return result
