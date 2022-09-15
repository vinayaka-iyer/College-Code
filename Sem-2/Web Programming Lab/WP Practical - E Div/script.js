let form = document.getElementById("form")
let department = document.getElementById("department");
let cse = document.getElementById("cse")
let mech = document.getElementById("mech")
let eee = document.getElementById("eee")


let text = document.getElementById("subjectname")
console.log(text.value)
form.addEventListener('submit', (e) =>{
    if(department.value==="Computer Science and Engineering"){
        cse.innerHTML=cse.innerHTML + "<li>"+text.value+"</li>"
        
    }
    else if(department.value==="Mechanical Engineering"){
        mech.innerHTML=mech.innerHTML + "<li>"+text.value+"</li>"
        
    }
    else if(department.value==="Electrical Engineering"){
        eee.innerHTML=eee.innerHTML + "<li>"+text.value+"</li>"
        
    }
    e.preventDefault()

  })
  