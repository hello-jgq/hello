
var changyong='';


var jk = new Array();
var a = new Array();
var b = new Array();
var c = new Array();
var d = new Array();
var e = new Array();
var f = new Array();
var g = new Array();
var h = new Array();
var i1 = new Array();
var j = new Array();
var k = new Array();
var l = new Array();
var m = new Array();
var n = new Array();
var o = new Array();
var p = new Array();
var q = new Array();
var r = new Array();
var s = new Array();
var t = new Array();
var u = new Array();
var v = new Array();
var w = new Array();
var x = new Array();
var y = new Array();
var z = new Array();









var kind;
var json;
var city = [
  {
    title: "常用位置",
    type: 'hot',
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "热门",
        "test": "testValue"
      }

    ]
  }, {
    title: "A",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "A"
      }

    ]
  }, {
    title: "B",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "B"
      }
    ]
  }, {
    title: "C",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "C"
      }
    ]
  }, {
    title: "D",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "D"
      }
    ]
  }, {
    title: "E",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "E"
      }

    ]
  }, {
    title: "F",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "F"
      }

    ]
  }, {
    title: "G",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "G"
      }
    ]
  }, {

    title: "H",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "H"
      }

    ]
  }, {
    title: "I",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "I"
      }
    ]
  }, {
    title: "J",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "J"
      }
    ]
  }, {
    title: "K",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "K"

      }

    ]
  }, {

    title: "L",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "L"
      }
    ]
  }, {

    title: "M",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "M"
      }

    ]
  }, {
    title: "N",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "N"
      }


    ]
  }, {
    title: "O",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "O"
      }

    ]
  },
  {
    title: "P",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "P"
      }

    ]
  }, {
    title: "Q",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "Q"
      }

    ]
  }, {

    title: "R",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "R"
      }
    ]
  }, {

    title: "S",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "S"
      }
    ]
  }, {
    title: "T",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "T"
      }


    ]
  }, {
    title: "U",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "U"
      }


    ]
  }, {
    title: "V",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "V"
      }


    ]
  }, {
    title: "W",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "W"
      }
    ]
  }, {
    title: "X",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "X"
      }
    ]
  }, {
    title: "Y",
    item: [

      {
        "name": "数据加载失败，请返回从新加载",
        "key": "Y"
      }

    ]
  }, {

    title: "Z",
    item: [
      {
        "name": "数据加载失败，请返回从新加载",
        "key": "Z"
      }

    ]
  }
]





var guanggao;


// pages/demo/demo.js
//let City = require('utils/allcity.js');

Page({

  data: {
    t:"shangh",
    guanggao: false,
    city: [],
    chengshi: '',
    config: {
      horizontal: true, // 第一个选项是否横排显示（一般第一个数据选项为 热门城市，常用城市之类 ，开启看需求）
      animation: true, // 过渡动画是否开启
      search: true, // 是否开启搜索
      searchHeight: 45, // 搜索条高度
      suctionTop: true // 是否开启标题吸顶
      
    }
  },
  onLoad() {
    var that=this;

    wx.setNavigationBarTitle({
      title: "选择城市",//页面标题为路由参数
  })
  wx.getStorage({//获取本地缓存
    key: "定位常用位置",
    success: function (res) {
      changyong=res.data;

    } ,
    fail: (res) => {

      changyong='';

    }
  
  })


  wx.request({
    url: 'http://lanya.mayipj.xyz/chengshiliebiao.php',
    method: 'POST',
    data: { city: "马鞍山" },
    header: {
      'Content-Type': 'application/x-www-form-urlencoded'
    },
    success: function(res) {
    
      if(changyong!=""){
        jk = changyong.split(" ");
        jk[0]="😀";
        }else{
          jk = res.data[0].TOP;
        }


      a = res.data[0].A
      b = res.data[0].B
      c = res.data[0].C
      d = res.data[0].D
      e = res.data[0].E
      f = res.data[0].F
      g = res.data[0].G
      h = res.data[0].H
      i1 = res.data[0].I
      j = res.data[0].J
      k = res.data[0].K
      l = res.data[0].L
      m = res.data[0].M
      n = res.data[0].N
      o = res.data[0].O
      p = res.data[0].P
      q = res.data[0].Q
      r = res.data[0].R
      s = res.data[0].S
      t = res.data[0].T
      u = res.data[0].U
      v = res.data[0].V
      w = res.data[0].W
      x = res.data[0].X
      y = res.data[0].Y
      z = res.data[0].Z




      for (var i = 0; i < jk.length; i++) {


        city[0].item[i] = { "name": jk[i], "key": "热门" };
  
  
      }
      for (var i = 0; i < a.length; i++) {
  
  
        city[1].item[i] = { "name": a[i], "key": "A" };
  
  
      }
      for (var i = 0; i < b.length; i++) {
  
  
        city[2].item[i] = { "name": b[i], "key": "B" };
  
  
      }
  
      for (var i = 0; i < c.length; i++) {
  
  
        city[3].item[i] = { "name": c[i], "key": "C" };
  
  
      }
  
      for (var i = 0; i < d.length; i++) {
  
  
        city[4].item[i] = { "name": d[i], "key": "D" };
  
  
      }
  
      for (var i = 0; i < e.length; i++) {
  
  
        city[5].item[i] = { "name": e[i], "key": "E" };
  
  
      }
  
      for (var i = 0; i < f.length; i++) {
  
  
        city[6].item[i] = { "name": f[i], "key": "F" };
  
  
      }
  
      for (var i = 0; i < g.length; i++) {
  
  
        city[7].item[i] = { "name": g[i], "key": "G" };
  
  
      }
  
      for (var i = 0; i < h.length; i++) {
  
  
        city[8].item[i] = { "name": h[i], "key": "H" };
  
  
      }
  
      for (var i = 0; i < i1.length; i++) {
  
  
        city[9].item[i] = { "name": i1[i], "key": "I" };
  
  
      }
  
      for (var i = 0; i < j.length; i++) {
  
  
        city[10].item[i] = { "name": j[i], "key": "J" };
        //console.log(city[10].item[i].name);
  
      }
  
      for (var i = 0; i < k.length; i++) {
  
  
        city[11].item[i] = { "name": k[i], "key": "K" };
  
  
      }
  
      for (var i = 0; i < l.length; i++) {
  
  
        city[12].item[i] = { "name": l[i], "key": "L" };
  
  
      }
  
      for (var i = 0; i < m.length; i++) {
  
  
        city[13].item[i] = { "name": m[i], "key": "M" };
  
  
      }
  
      for (var i = 0; i < n.length; i++) {
  
  
        city[14].item[i] = { "name": n[i], "key": "N" };
  
  
      }
      for (var i = 0; i < o.length; i++) {
  
  
        city[15].item[i] = { "name": o[i], "key": "O" };
  
  
      }
  
      for (var i = 0; i < p.length; i++) {
  
  
        city[16].item[i] = { "name": p[i], "key": "P" };
  
  
      }
  
      for (var i = 0; i < q.length; i++) {
  
  
        city[17].item[i] = { "name": q[i], "key": "Q" };
  
  
      }
  
      for (var i = 0; i < r.length; i++) {
  
  
        city[18].item[i] = { "name": r[i], "key": "R" };
  
  
      }
  
      for (var i = 0; i < s.length; i++) {
  
  
        city[19].item[i] = { "name": s[i], "key": "S" };
  
  
      }
  
      for (var i = 0; i < t.length; i++) {
  
  
        city[20].item[i] = { "name": t[i], "key": "T" };
  
  
      }
  
      for (var i = 0; i < u.length; i++) {
  
  
        city[21].item[i] = { "name": u[i], "key": "U" };
  
  
      }
  
      for (var i = 0; i < v.length; i++) {
  
  
        city[22].item[i] = { "name": v[i], "key": "V" };
  
  
      }
      for (var i = 0; i < w.length; i++) {
  
  
        city[23].item[i] = { "name": w[i], "key": "W" };
  
  
      }
      for (var i = 0; i < x.length; i++) {
  
  
        city[24].item[i] = { "name": x[i], "key": "X" };
  
  
      }
      for (var i = 0; i < y.length; i++) {
  
  
        city[25].item[i] = { "name": y[i], "key": "Y" };
  
  
      }
      for (var i = 0; i < z.length; i++) {
  
  
        city[26].item[i] = { "name": z[i], "key": "Z" };
  
  
      }







}
  })










    setTimeout(()=>{
      that.setData({
        city: city
      })
    
    },1000)
        







  },


  bindtap(e) {
var kaiguan;

    kind = e.detail.name
    console.log("111222"+kind)

    

    if (kind == "暂无城市，请等待更新"){

    


    }else if (kind == "😀"){

      wx.showModal({

        title: '提示',
        content: '每次选择完不同的城市后，会自动保存，方便以后选择',
       



      })


    }else{

      wx.reLaunch({
        url: '/page/zhubao/pages/index/index?kind=' + kind
       
    
       })




      
     





      



    }

  },

})
