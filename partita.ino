String pgPartita() {
  String HTML = "<!DOCTYPE html><html class='h-100'><title>Pingo Pongo - Partita</title>";
  //if (autoref)
  HTML += "<script> function scarica() { makeCorsRequest(); } function createCORSRequest(method, url) { var xhr = new XMLHttpRequest(); if ('withCredentials' in xhr) { xhr.open(method, url, true); } else if (typeof XDomainRequest != 'undefined') { xhr = new XDomainRequest(); xhr.open(method, url); } else { xhr = null; } return xhr; } function makeCorsRequest() { var url = 'http://10.10.10.1/dati'; var xhr = createCORSRequest('GET', url); if (!xhr) { return; } xhr.onload = function () { var text = xhr.responseText; var obj = JSON.parse(text); document.getElementById('pagina').innerHTML = obj.html; if(obj.code == 0){ setTimeout(scarica, 3000); } }; xhr.onerror = function (e) { console.log(e); }; xhr.send(); }</script>";
  HTML += "<style> /*! CSS Used from: https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css */ *, ::after, ::before { box-sizing: border-box; } body { margin: 0; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, 'Helvetica Neue', Arial, 'Noto Sans', sans-serif, 'Apple Color Emoji', 'Segoe UI Emoji', 'Segoe UI Symbol', 'Noto Color Emoji'; font-size: 1rem; font-weight: 400; line-height: 1.5; color: #212529; text-align: left; background-color: #fff; } h1 { margin-top: 0; margin-bottom: .5rem; } strong { font-weight: bolder; } h1 { margin-bottom: .5rem; font-weight: 500; line-height: 1.2; } h1 { font-size: 2.5rem; } .display-1 { font-size: 6rem; font-weight: 300; line-height: 1.2; } .display-2 { font-size: 5.5rem; font-weight: 300; line-height: 1.2; } .row { display: -ms-flexbox; display: flex; -ms-flex-wrap: wrap; flex-wrap: wrap; margin-right: -15px; margin-left: -15px; } .col-lg-12, .col-sm-12 { position: relative; width: 100%; padding-right: 15px; padding-left: 15px; } @media (min-width:576px) { .col-sm-12 { -ms-flex: 0 0 100%; flex: 0 0 100%; max-width: 100%; } } @media (min-width:992px) { .col-lg-12 { -ms-flex: 0 0 100%; flex: 0 0 100%; max-width: 100%; } } .bg-primary { background-color: #007bff !important; } .bg-info { background-color: #4BB3FD !important; }.btn { display: inline-block; margin-bottom: 0; font-weight: 400; text-align: center; white-space: nowrap; vertical-align: middle; -ms-touch-action: manipulation; touch-action: manipulation; cursor: pointer; background-image: none; border: 1px solid transparent; padding: 6px 12px; font-size: 14px; line-height: 1.42857143; border-radius: 4px; -webkit-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none; } .btn:active:focus, .btn:focus { outline: 5px auto -webkit-focus-ring-color; outline-offset: -2px; } .btn:focus, .btn:hover { color: #333; text-decoration: none; } .btn:active { background-image: none; outline: 0; -webkit-box-shadow: inset 0 3px 5px rgba(0, 0, 0, .125); box-shadow: inset 0 3px 5px rgba(0, 0, 0, .125);} .btn-primary{color:#fff;background-color:#007bff;border-color:#007bff;}.btn-primary:hover{color:#fff;background-color:#0069d9;border-color:#0062cc;}.btn-primary:focus{box-shadow:0 0 0 .2rem rgba(0,123,255,.5);}.btn-primary:disabled{color:#fff;background-color:#007bff;border-color:#007bff;} .rounded { border-radius: .25rem !important; } .rounded-pill { border-radius: 50rem !important; } .d-none { display: none !important; } .d-block { display: block !important; } @media (min-width:992px) { .d-lg-block { display: block !important; } } .h-100 { height: 100% !important; } .m-0 { margin: 0 !important; } .p-0 { padding: 0 !important; } .p-2 { padding: .5rem !important; } .text-center { text-align: center !important; } .text-white { color: #fff !important; } @media print { *, ::after, ::before { text-shadow: none !important; box-shadow: none !important; } body { min-width: 992px !important; } }</style><head> <title>Partita - Pingo Pongo</title> <style> </style></head><body class='h-100 d-block bg-info' onload='setTimeout(scarica, 1000)'> <div class='containere h-100'> <div class='row h-100 m-0'> <div class='col-sm-12 col-lg-12 h-60 rounded text-white text-center p-0' id='pagina'>";
  HTML += pgDati();
  HTML += "</div> </div> </div></body></html>";
  return HTML;
}
