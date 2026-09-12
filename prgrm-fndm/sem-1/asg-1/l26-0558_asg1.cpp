#include <iostream>

using namespace std;


int main()
{
  cout << endl << "========= Level 1 =========" << endl;
  {
    cout << endl << "- Mission 1 -" << endl;
    int n;

    int ttl_trsur = 0;
    float avg_trsur = 0;
    int hgh_trsur = 0;

    int n_scrp_chst = 0;
    int n_ord_chst = 0;
    int n_rare_chst = 0;
    int n_legnd_chst = 0;
    
    cout << "Enter no. of chests discovered: ";
    cin >> n;
    if (n == 0)
      cout << "No chests were added :(, good luck on ur next discovery ;-;";

    int i = 1;
    while (i <= n)
    {
        int tmp_chst_wrth;
        cout << "Enter chest #" << i << " 's treasure (worth): ";
        cin >> tmp_chst_wrth;

        if (tmp_chst_wrth >= 5000)
          n_legnd_chst += 1;
        else if (tmp_chst_wrth > 1000)
          n_rare_chst += 1;
        else if (tmp_chst_wrth > 100)
          n_ord_chst += 1;
        else
          n_scrp_chst += 1;

        if (tmp_chst_wrth > hgh_trsur)
          hgh_trsur = tmp_chst_wrth;

        ttl_trsur += tmp_chst_wrth;
        i++;
    }

    if (n!=0)
      avg_trsur = (float)ttl_trsur / n;

    cout << endl;
    cout << "Total Treasure: " << ttl_trsur << endl;
    cout << endl;
    
    cout << "Scrap chest: " << n_scrp_chst << endl;
    cout << "Ordinary chest: " << n_ord_chst << endl;
    cout << "Rare chest: " << n_rare_chst << endl;
    cout << "Legendary chest: " << n_legnd_chst << endl;

    cout << endl;
    cout << "Avg. value: " << avg_trsur << endl;
    cout << "Hgihest valued chest: " << hgh_trsur << endl;
  }

  {
    cout << endl << "- Mission 2 -" << endl;
    int n = 0;
    int ttl_wght = 0;
    int ttl_pure = 0;

    float avg_pure = 0;
    float hgh_pure = 0;

    int n_ord_crystl = 0;
    int n_valuable_crystl = 0;
    int n_legnd_crystl = 0;
    
    cout << "Enter no. of crystals discovered: ";
    cin >> n;
    if (n == 0)
      cout << "No crystals were added :(, good luck on ur next discovery ;-;";

    int i = 1;
    while (i <= n)
    {
        int wght;
        int pure;
        cout << "Enter Crystal #" << i << " 's weight and purity: ";
        cin >> wght >> pure;

        if (wght >= 100 && pure >= 95)
          n_legnd_crystl += 1;
        else if (wght >= 50 && pure >= 80)
          n_valuable_crystl += 1;
        else
          n_ord_crystl += 1;

        if (pure > hgh_pure)
          hgh_pure = pure;

        ttl_wght += wght;
        ttl_pure += pure;
        i++;
    }

    if (n!=0)
      avg_pure = (float)ttl_pure / n;

    cout << endl;
    cout << "Total Weight: " << ttl_wght << endl;
    cout << endl;
    
    cout << "Ordinary Crstals: " << n_ord_crystl << endl;
    cout << "Valueable Crystals: " << n_valuable_crystl << endl;
    cout << "Legendary Crystals: " << n_legnd_crystl << endl;

    cout << endl;
    cout << "Avg. purity: " << avg_pure << endl;
    cout << "Hgihest purity: " << hgh_pure << endl;

  }

  cout << endl << "========= Level 2 =========" << endl;
  {
    cout << endl << "- Mission 3 -" << endl << endl;

    int drgn_hp = 500;
    
    int atk_cnt = 0;
    int ttl_raw_dmg = 0;
    int ttl_actual_dmg = 0;

    // drgn icon in unicode(nerd_font) might appear as rnd gibberish
    cout << "A dragon appears rawr!   " << endl;

    int i = 1;
    
    while (drgn_hp > 0) {
      int raw_dmg;
      cout << "Enter atk dmg: " ;
      cin >> raw_dmg;

      ttl_raw_dmg += raw_dmg;

      int actual_dmg = 0;

      if (raw_dmg > 100)
        actual_dmg = raw_dmg - 20;
      else if (raw_dmg % 5 == 0)
        actual_dmg = raw_dmg * 2;
      else if (raw_dmg < 0)
        actual_dmg = -raw_dmg;
      else
        actual_dmg = raw_dmg;
        
      cout << "Attack " << i << "-> Raw=" << raw_dmg << " Actual=" << actual_dmg << endl;
      
      ttl_actual_dmg += actual_dmg;
      drgn_hp -= actual_dmg;
      atk_cnt += 1;
      i++;
    }

    cout << endl << "Drgn Slain!" << endl;

    cout << "Number of attacks: " << atk_cnt << endl;
    cout << "Total Raw Dmg: " << ttl_raw_dmg << endl;
    cout << "Total Actual Dmg: " << ttl_actual_dmg << endl;

    cout << "Final hp (dragon): " << drgn_hp << endl;

  }

  cout << endl << "========= Level 3 =========" << endl;

  {
    cout << endl << "- Mission 4 -" << endl;
    int n;
    cout << "Enter a +ve int: ";
    cin >> n;

    int dig_cnt = 0;
    int dig_sum = 0;
    int dig_prd = 1;
    int dig_lrg = 0;
    int dig_sml = 9;
    int dig_evn = 0;
    int dig_odd = 0;

    while (n / 10 != 0 || n != 0)
    {
      int t = n % 10;
      n = n / 10;
      
      dig_sum += t;
      dig_prd *= t;

      if (t > dig_lrg)
        dig_lrg = t;

      if (t < dig_sml)
        dig_sml = t;

      if (t % 2 == 0)
        dig_evn += 1;
      else
        dig_odd += 1;

      dig_cnt += 1;
    }

    cout << "Digits: " << dig_cnt << endl;
    cout << "Sum: " << dig_sum << endl;
    cout << "Product: " << dig_prd << endl;
    cout << "Largest Digit: " << dig_lrg << endl;
    cout << "Smallest Digit: " << dig_sml << endl;
    cout << "Even Digits: " << dig_evn << endl;
    cout << "Odd Digits: " << dig_odd << endl; 
  }

  {
    cout << endl << "- Misssion 5 -" << endl;
    
    unsigned int n, n_l = 0, n_l2 = 0, n_s = 1000000000;

    cout << "Enter no. of +ve integers: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
      unsigned int t;
      cout << "Enter number #" << i << " : ";
      cin >> t;

      if (t > n_l)
      {
        n_l2 = n_l;
        n_l = t;
      }

      if (t < n_l && t > n_l2)
        n_l2 = t;

      if (t < n_s)
        n_s = t;

      i++;
      
    }

    cout << "Largest: " << n_l << endl;   
    cout << "2nd Largest: " << n_l2 << endl;   
    cout << "Smallest: " << n_s << endl;   
  }

  cout <<endl << "===== Level 4 ======" << endl;
  
  {
    cout << endl << "- Mission 6 -" << endl;

    int n;
    int sf = 0, crsd = 0, empty = 0;
    int sum_sf = 0, sum_crsd =0;
    int lrg_sf = 0, sm_crsd = 0;
    cout << "Enter number of artifacts; ";
    cin >> n;
    
    int i = 1;
    while (i <= n)
    {
      int t;
      cout << "Enter value of artifact# " << i << ": ";
      cin >> t;
      
      bool isSafe = false;
      bool isCrsd = false;
      bool isEmpty = false;
      
      if (t > 0)
      {
        sf += 1;
        sum_sf += t;
        isSafe = true;
      } 

      else if (t < 0)
      {
        isCrsd = true;
        crsd += 1;
        sum_crsd += t;
      }
      else if (t == 0)
      {
        isEmpty = true;
        empty+= 1;
      }

      if (isSafe && t > lrg_sf)
        lrg_sf = t;

      if (isCrsd && t < sm_crsd)
        sm_crsd = t;
      i++;
    }

    cout << "No. of safe artf. : " << sf << endl;
    cout << "No. of crsd artf. : " << crsd << endl;
    cout << "No. of empty artf. : " << empty << endl; 
    cout << "Sum of safe values: " << sum_sf << endl;
    cout << "Sum of cursed values: " << sum_crsd << endl;
    cout << "Largest safe value: " << lrg_sf << endl;
    cout << "Smallest cursed value: " << sm_crsd << endl;
  }

  cout << endl << "======= Mission 5 ======" <<endl;

  {
    cout << "- Mission 7 -" << endl;
    int n, code, enrgy = 100;
    int atmpts = 0;
    bool didOpen = false;
    cout << "Enter Code: ";
    cin >> code;

    cout << "Enter No of attempts: ";
    cin >> n;
    
    int i = 1;
    while (i <= n)
    {
      int t;
      cout << "Attempt #" << i << ": ";
      cin >> t;

      atmpts += 1;
      if (t == code)
      {
        cout << "Correct!" << endl;
        cout << "VAULT UNLOCKED! " << endl;
        didOpen = true;
        break;
        
      }
      else if ( t > code)
      {
        // am i supposed to do w og energy or not????
        enrgy -= enrgy / n;
        cout << "Too high" << endl;
      }else if (t < code){
        cout << "Too low" << endl;
        enrgy -= enrgy / n;
      }
      i++;
    }
    if (!didOpen)
      cout << "Vault is still locked :(" << endl;
    cout << "Attempts Used: " << atmpts << endl;
    cout << "Energy remaining: " << enrgy << endl;
  }

  cout << endl << "======== Level 6 =========" << endl;
  {
    cout << endl << "- Mission 8 -" << endl;
    unsigned int n;
    unsigned int stps = 0, lrgst = 0;

    cout << "Enter a +ve int: ";
    cin >> n;

    while (n!= 1)
    {
      if (n % 2 == 0)
        n = n / 2;
      else
        n = (n * 3 )+ 1;

      cout << n << endl;

      if (n > lrgst)
        lrgst = n;

      stps += 1;
    }

    cout << "Steps: " << stps << endl;
    cout << "Largest Value: " << lrgst << endl;
    
  }

  {
    cout << "- Mission 9 -" << endl;

    // infinity
    // TODO: commment me
    unsigned int e, no_rnds = 0, hgh_e = 0, low_e = 0, no_even = 0, no_odd = 0;
    cout << "Enter +ve energy (plz enter 0 to prevent infinite loop): ";
    cin >> e;

    while (e > 0)
    {
      if (e % 2 == 0)
      {
        e /= 2;
        no_even += 1;
      }else{
        e += 7;
        no_odd += 1;
      }

      if (e % 5 == 0)
        e -= 3;
      
      if (e > hgh_e)
        hgh_e = e;
      // lowest energy will always be 0 ngl 
      if (e < low_e)
        low_e = e;
      
      no_rnds += 1;
    }

    cout << "No of Rounds: " << no_rnds << endl;
    cout << "No of Even Rounds: " << no_even << endl;
    cout << "No of Odd Rounds: " << no_odd << endl;

    cout << "Lowest Energy: " << low_e << endl;
    cout << "Highest Energy: " << hgh_e << endl;    
  }

  {
    cout << "- Mission 10 -" << endl;
    int hp = 100, gld = 0, scr = 0;
    int encr_srv = 0;

    cout << "1 = Monster, 2 = Treasure, 3 = Trap, 4 = Healing Fountain, 5 = Ancient Artifact" << endl;

    while (hp > 0)
    {
      int t;
      cout << "Enter an int (1 - 5): ";
      cin >> t;
      
      if (t < 1 || t > 5)
        // can i use continue?? idk
        cout << "Invalid input :<" << endl;
      else if ( t == 1)
        {
          hp -= 20;
        }
      else if (t == 2){
        gld += 100;
        scr += 10;
      }
      else if (t == 3)
      {
        hp -= 15;
        scr -= 5;
      }
      else if ( t == 4)
      {
        hp += 25;
      }
      else if (t == 5 && hp < 40)
      {
        gld+= 250;
        scr += 50;
      }
      else if (t == 5)
      {
        gld += 250;
        scr += 30;
      }

      if (hp > 100)
        hp = 100;
      encr_srv++;
    }

    cout << "Health: " << hp << ", Gold: " << gld << ", Score: " << scr << endl;
    cout << "Encounters Survived: " << encr_srv << endl;

    if (scr >= 100)
      cout << "LEGENDARY TREASURE HUNTER" << endl;
    else if (scr >= 50)
      cout << "Master explorer" << endl;
    else if (scr >= 20)
      cout << "Survivor" << endl;
    else
      cout << "novice" << endl;
  }
  return 0;
}
